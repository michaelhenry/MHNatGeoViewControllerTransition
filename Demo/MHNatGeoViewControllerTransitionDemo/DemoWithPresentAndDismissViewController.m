//
//  DemoWithPresentAndDismissViewController.m
//  MHNatGeoViewControllerTransitionDemo
//
//  Created by Michael henry Pantaleon on 6/7/13.
//  Copyright (c) 2013 Michael Henry Pantaleon. All rights reserved.
//

#import "DemoWithPresentAndDismissViewController.h"
#import "MHNatGeoViewControllerTransition.h"
@interface DemoWithPresentAndDismissViewController ()

@end

@implementation DemoWithPresentAndDismissViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)dismiss:(UIButton *)sender {
    [self dismissNatGeoViewControllerWithCompletion:^(BOOL finished) {
        NSLog(@"Dismiss complete!");
    }];
}

- (IBAction)presentProgrammatically:(UIButton *)sender {
    DemoWithPresentAndDismissViewController * demoVC = [self.storyboard instantiateViewControllerWithIdentifier:@"demoVC"];
    [self presentNatGeoViewController:demoVC completion:^(BOOL finished) {
        NSLog(@"Present complete!");
    }];

}
@end
