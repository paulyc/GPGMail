/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTextField.h"

@interface AutosizingTextField : NSTextField
{
    double _minimumHeight;
}

- (void)_editorResized;
- (void)_adjustWidth:(double)arg1 ofEditor:(id)arg2;
- (void)_adjustWidthBy:(double)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)_setupTextView:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (double)minimumHeight;
- (void)setMinimumHeight:(double)arg1;

@end
