/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "WebHTMLView.h"

@class NSArray;

@interface MessageWebHTMLView : WebHTMLView
{
    NSArray *_attachmentsForContextualMenu;
}

- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)setSelectionFloat:(id)arg1 undoTitle:(id)arg2;
- (BOOL)canFloatSelectedElement;
- (void)floatNone:(id)arg1;
- (void)floatRight:(id)arg1;
- (void)floatLeft:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)messageViewer;
- (void)fixWebArchiveAndRTFDDataOnPasteboard:(id)arg1;
- (void)writeSelectionWithPasteboardTypes:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)insertList:(id)arg1;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)insertNumberedList:(id)arg1;
- (void)insertBulletedList:(id)arg1;
- (void)exportAttachmentsToIPhoto:(id)arg1;
- (void)importInvitations:(id)arg1;
- (void)chooseApplicationToOpenAttachment:(id)arg1;
- (void)openAttachmentWithApplication:(id)arg1;
- (void)viewAttachmentInline:(id)arg1;
- (id)editingDelegate;
- (void)saveAttachmentToDownloadsDirectory:(id)arg1;
- (void)saveAttachment:(id)arg1;
- (void)quickLookAttachment:(id)arg1;
- (void)quickLookSelectedAttachments:(id)arg1;
- (void)openAttachment:(id)arg1;
- (id)attachmentForEvent:(id)arg1;
- (BOOL)moreThanOneAttachmentSelected;
- (BOOL)allSelectedAttachmentsArePhotos;
- (BOOL)selectionIsOneAttachment;
- (id)selectedAttachments;
- (void)willShowContextualMenuForAttachment:(id)arg1;
- (void)setAttachmentsForContextualMenu:(id)arg1;
- (id)attachmentsForContextualMenu;
- (id)selectedAttributedString;
- (void)_updateFontPanel;
- (void)dealloc;

@end
