MHNatGeoViewControllerTransition
================================

A new ViewController transition inspired by NatGeo (City Guides by National Geographic)

# Features
	
	Easy integration
	
	Can be use as segue


# Requirements
	
	Requires either iOS 5.0 and above.



# Usage

## How to Present a ViewController
	
### Using Storyboard Segue

	Just simply drag the from Source to Destination and select *nat geo* Segue (see screenshots below)

![Preview](http://i1102.photobucket.com/albums/g447/michaelhenry119/IOS%20Controls/MHNatGeoViewControllerTransition/ScreenShot2013-06-09at123039PM_zps66f45f08.png)

![Preview](http://i1102.photobucket.com/albums/g447/michaelhenry119/IOS%20Controls/MHNatGeoViewControllerTransition/ScreenShot2013-06-09at123123PM_zpsd131f70d.png)

### Present Programmatically

Just

	#import "MHNatGeoViewControllerTransition.h"

and then

	[self presentNatGeoViewController:demoViewController];

or you can use the completion block,

	[self presentNatGeoViewController:demoViewController completion:^(BOOL finished) {		
		NSLog(@"Present complete!");
	}];

## How to dismiss a ViewController

Just

	#import "MHNatGeoViewControllerTransition.h"

and then
	
	[self dismissNatGeoViewController];

or you can use the completion block,

	[self dismissNatGeoViewControllerWithCompletion:^(BOOL finished) {	
		NSLog(@"Dismiss complete!");
    }];


# Is it Easy? :)


Please let me know if you have any questions. 

Cheers,  
[Michael Henry Pantaleon](http://www.iamkel.net)

Twitter: [@michaelhenry119](https://twitter.com/michaelhenry119)

Linked in: [ken119](http://ph.linkedin.com/in/ken119)

http://www.iamkel.net



# Licensing

Copyright (c) 2013 Michael Henry Pantaleon (http://www.iamkel.net). All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.