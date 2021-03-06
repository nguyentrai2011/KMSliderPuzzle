//
//  KMImagePatch.h
//  FBSliderPuzzle
//
//  Created by Keith Moon on 26/04/2012.
//  Copyright (c) 2012 Data Ninjitsu Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KMImagePatch : NSObject

@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, assign) BOOL isBlank;

@end
