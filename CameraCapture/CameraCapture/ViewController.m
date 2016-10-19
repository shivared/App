//
//  ViewController.m
//  CameraCapture
//
//  Created by Pavan  on 10/18/16.
//  Copyright © 2016 Pavan . All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

- (BOOL) startCamCapture
{
    camDelegate = [[CameraCapture alloc]init];
    NSString *deviceName = @"FaceTime HD Camera";
    BOOL success = [camDelegate startCamera: deviceName];
    return success;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    if([self startCamCapture])
    {
        NSLog(@"Success accessing camera");
    }
    

    // Do any additional setup after loading the view.
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}


@end
