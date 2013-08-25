//
// MHNatGeoViewControllerTransition.h
// 
// Version 1.0
//
// Copyright (c) 2013 Michael Henry Pantaleon (http://www.iamkel.net). All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface MHNatGeoViewControllerTransition : NSObject

@property (assign, nonatomic, getter = isDimissing) BOOL dismissing;

@property (strong, nonatomic) UIView *sourceView;
@property (strong, nonatomic) UIView *destinationView;
@property (assign, nonatomic) NSTimeInterval duration;

- (id)initWithSourceView:(UIView *)sourceView destinationView:(UIView *)destinationView duration:(NSTimeInterval)duration;
- (void)perform;
- (void)perform:(void (^)(BOOL finished))completion;
+ (void) presentViewControllerTransition:(UIViewController*)destination source:(UIViewController*)source duration:(NSTimeInterval) duration completion:(void (^)(BOOL finished))completion;
+ (void)dismissViewController:(UIViewController *)viewController duration:(NSTimeInterval)duration completion:(void (^)(BOOL finished))completion;

@end

#pragma mark - UIViewController(MHNatGeoViewControllerTransition)
@interface UIViewController(MHNatGeoViewControllerTransition)

@property(nonatomic,retain) UIViewController * presentedFromViewController;

- (void)presentNatGeoViewController:(UIViewController *)viewController completion:(void (^)(BOOL finished))completion;
- (void)presentNatGeoViewController:(UIViewController *)viewController;
-(void) dismissNatGeoViewControllerWithCompletion:(void (^)(BOOL finished))completion;
-(void) dismissNatGeoViewController;

@end;