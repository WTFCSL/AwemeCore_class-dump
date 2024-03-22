//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, NSArray, RACDisposable, IESLiveKTVTuningEffectResourceManager, UIColor, NSNumber, GetTuningInfoResponse_EffectItem;

@interface IESLiveKTVTuningEffectCellViewModel : NSObject {
    BOOL _selected;
    BOOL _isDefault;
    long long _type;
    NSArray *_iconUrls;
    NSString *_name;
    NSString *_title;
    UIColor *_titleColor;
    GetTuningInfoResponse_EffectItem *_item;
    HTSEventContext *_eventContext;
    RACDisposable *_disposable;
    IESLiveKTVTuningEffectResourceManager *_resourceManager;
    NSNumber *_startTime;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *iconUrls;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) GetTuningInfoResponse_EffectItem *item;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) IESLiveKTVTuningEffectResourceManager *resourceManager;
@property (nonatomic) BOOL isDefault;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) UIColor *titleColor;

- (void)setEventContext:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)iconUrls;
- (void)setIconUrls:(id)arg0;
- (void)didDeselect;
- (id)initWithItem:(id)arg0 resourceManager:(id)arg1 eventContext:(id)arg2 componentContext:(id)arg3 titleColor:(id)arg4;
- (void)didSelect:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)selected;
- (id)tracker;
- (id)item;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)resourceManager;
- (id)titleColor;
- (BOOL)isDefault;
- (id)title;
- (void)setType:(long long)arg0;
- (id)startTime;
- (void)setSelected:(BOOL)arg0;
- (id)eventContext;
- (void)setName:(id)arg0;
- (void)setTitleColor:(id)arg0;
- (id)cachePath;
- (void)setIsDefault:(BOOL)arg0;
- (id)name;
- (void)setItem:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setResourceManager:(id)arg0;

@end