//
//  ImageProcessor.h
//  CameraCapture
//
//  Created by Pavan  on 10/18/16.
//  Copyright © 2016 Pavan. All rights reserved.
//

#ifndef ImageProcessor_h
#define ImageProcessor_h

#import <opencv2/opencv.hpp>

//#import <UIKit/UIKit.h>
#ifdef __OBJC__
#import <AppKit/AppKit.h>
#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import <Foundation/Foundation.h>
#endif

@interface ImageProcessor : NSObject

- (cv::Mat)cvMatFromUIImage:(UIImage *)image;
@end

#endif /* ImageProcessor_h */
