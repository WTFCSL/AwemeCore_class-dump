//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSURL;

@interface UTPageEventItem : NSObject {
    BOOL _isSkip;
    BOOL _isH52001;
    BOOL _hasAppeared;
    long long _pageAppearTime;
    NSString *_pageRefer;
    NSString *_pageName;
    NSMutableDictionary *_pageProperties;
    NSURL *_pageUrl;
}

@property long long pageAppearTime;
@property (retain) NSString *pageRefer;
@property (retain) NSString *pageName;
@property BOOL isSkip;
@property BOOL isH52001;
@property BOOL hasAppeared;
@property (retain) NSMutableDictionary *pageProperties;
@property (retain) NSURL *pageUrl;

- (void)refreshWhenSwitchBackGround;
- (void)refreshWhenSwitchForeGround;
- (id)pageRefer;
- (void)setPageRefer:(id)arg0;
- (BOOL)isSkip;
- (void)setIsSkip:(BOOL)arg0;
- (BOOL)isH52001;
- (void)setIsH52001:(BOOL)arg0;
- (id)pageProperties;
- (void)setPageProperties:(id)arg0;
- (id)pageUrl;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasAppeared;
- (void)setPageUrl:(id)arg0;
- (void)setHasAppeared:(BOOL)arg0;
- (void)setPageAppearTime:(long long)arg0;
- (long long)pageAppearTime;
- (void)setPageName:(id)arg0;
- (id)pageName;

@end
