/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/IMAPClientOperation.h>

@class NSMutableArray;

@interface IMAPAggregateClientOperation : IMAPClientOperation
{
    NSMutableArray *_operations;
}

- (id)initWithCommandType:(int)arg1 operations:(id)arg2;
- (void)dealloc;
- (int)composition;
- (void)setGateway:(id)arg1;
- (void)cleanupAfterCompletion;
@property(retain) NSMutableArray *operations; // @synthesize operations=_operations;

@end

