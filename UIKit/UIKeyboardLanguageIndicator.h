/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UIImage;

@interface UIKeyboardLanguageIndicator : UIView {
	UIImage* m_image;
	float m_textSize;
	int m_style;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setBackgroundImage:(id)image;
-(void)setTextSize:(float)size;
-(void)setStyle:(int)style;
-(void)fade;
-(void)drawRect:(CGRect)rect;
@end
