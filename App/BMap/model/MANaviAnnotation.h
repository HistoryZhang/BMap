//
//  MANaviAnnotation.h
//  OfficialDemo3D
//
//  Created by yi chen on 1/7/15.
//  Copyright (c) 2015 songjian. All rights reserved.
//

@import Foundation;
@import MAMapKit;

typedef NS_ENUM(NSInteger, MANaviAnnotationType)
{
    MANaviAnnotationTypeDrive = 0,
    MANaviAnnotationTypeWalking = 1,
    MANaviAnnotationTypeRiding = 2,
};

@interface MANaviAnnotation : MAPointAnnotation

@property (nonatomic) MANaviAnnotationType type;

@end
