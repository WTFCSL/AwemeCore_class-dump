//
//     Generated by private class-dump
//

@class NSString;

@interface IESECMallRecommendConfig : NSObject {
    BOOL _openSaveStraightOutData;
    BOOL _manualCreatePage;
    long long _scene;
    NSString *_pageName;
    NSString *_configJsonUrl;
    NSString *_pageCardUrl;
    long long _straightOutLevel;
    NSString *_screenStraightId;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewPortOnWindow;
}

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *configJsonUrl;
@property (copy, nonatomic) NSString *pageCardUrl;
@property (nonatomic) long long straightOutLevel;
@property (copy, nonatomic) NSString *screenStraightId;
@property (nonatomic) BOOL openSaveStraightOutData;
@property (nonatomic) BOOL manualCreatePage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewPortOnWindow;

- (BOOL)openSaveStraightOutData;
- (void)setOpenSaveStraightOutData:(BOOL)arg0;
- (BOOL)manualCreatePage;
- (id)configJsonUrl;
- (id)pageCardUrl;
- (long long)straightOutLevel;
- (id)screenStraightId;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewPortOnWindow;
- (void)setConfigJsonUrl:(id)arg0;
- (void)setPageCardUrl:(id)arg0;
- (void)setStraightOutLevel:(long long)arg0;
- (void)setScreenStraightId:(id)arg0;
- (void)setManualCreatePage:(BOOL)arg0;
- (void)setViewPortOnWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (long long)scene;
- (void)setPageName:(id)arg0;
- (id)pageName;

@end