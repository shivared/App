//
//  CameraCapture.h
//  CameraCapture
//
//  Created by Pavan  on 10/18/16.
//  Copyright © 2016 Pavan . All rights reserved.
//

#ifndef CameraCapture_h
#define CameraCapture_h


#import <Foundation/Foundation.h>
#import <AVFoundation/AVCaptureOutput.h> // Allows us to use AVCaptureVideoDataOutputSampleBufferDelegate


@interface CameraCapture : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

- ( BOOL ) startCamera: (NSString*) deviceName;

@end
#endif /* CameraCapture_h */
