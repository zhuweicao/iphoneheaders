/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <Foundation/NSValue.h>


@interface NSValue (CATransform3DAdditions)
+(id)valueWithCATransform3D:(CATransform3D)catransform3D;
-(CATransform3D)CATransform3DValue;
@end

@interface NSValue (CARenderValue)
-(Object*)CA_copyRenderValue;
@end

@interface NSValue (CAAnimatableValue)
-(id)CA_addValue:(id)value multipliedBy:(int)by;
-(id)CA_interpolateValue:(id)value byFraction:(float)fraction;
-(float)CA_distanceToValue:(id)value;
@end
