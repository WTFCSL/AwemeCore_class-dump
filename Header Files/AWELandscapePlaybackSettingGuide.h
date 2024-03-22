//
//     Generated by private class-dump
//

@class NSString, DUXPopover, AWEAwemeModel;

@interface AWELandscapePlaybackSettingGuide : AWELandscapeBaseGuide <AWELandscapeGuideProtocol> {
    DUXPopover *_popover;
    AWEAwemeModel *_model;
}

@property (class, readonly, nonatomic) NSString *key;
@property (class, nonatomic) BOOL guideHasShow;

@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)guideHasShow;
+ (void)setGuideHasShow:(BOOL)arg0;
+ (id)key;

- (BOOL)canShow;
- (id)initWithTargetView:(id)arg0 model:(id)arg1 context:(id)arg2;
- (void)setModel:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)popover;
- (id)model;
- (void)setData:(id)arg0;
- (BOOL)show;
- (id)identifier;
- (void)setPopover:(id)arg0;
- (long long)priority;

@end
