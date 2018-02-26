//
//  LKImageDefaultProcessor.h
//  LKImageKit
//
//  Created by lingtonke on 15/9/7.
//  Copyright ©2014 - 2018 Tencent.All Rights Reserved. This software is licensed under the terms in the LICENSE.TXT file that accompanies this software.
//

#import "LKImageProcessorManager.h"
#import "LKImageView.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LKImageBlurProcessor : LKImageProcessor

@property (nonatomic, assign) CGFloat blurRadius;
@property (nonatomic, strong) UIColor *blurTintColor;

@end
