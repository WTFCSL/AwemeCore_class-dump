//
//     Generated by private class-dump
//

@class NSString;

@interface HGTrackerPageEvent : HGTrackerTimingEvent {
    BOOL _hasWebview;
    NSString *_pagePath;
}

@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) BOOL hasWebview;

- (void)setPagePath:(id)arg0;
- (id)initWithPath:(id)arg0 hasWebview:(BOOL)arg1;
- (id)pagePath;
- (BOOL)hasWebview;
- (void)setHasWebview:(BOOL)arg0;
- (void).cxx_destruct;

@end
