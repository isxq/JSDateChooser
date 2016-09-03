//
//  CustomImage.h
//  JSDateChooser
//
//  Created by sxq on 16/9/3.
//  Copyright (c) 2016 sxq. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface CustomImage : NSObject

// iOS Controls Customization Outlets
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* prevTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* nextTargets;

// Drawing Methods
+ (void)drawPrev;
+ (void)drawNext;

// Generated Images
+ (UIImage*)imageOfPrev;
+ (UIImage*)imageOfNext;

@end