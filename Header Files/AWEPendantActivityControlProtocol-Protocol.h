//
//     Generated by private class-dump
//

@class AWEActivityConfigModel;

@protocol AWEPendantActivityControlProtocol <NSObject>

@property (retain, nonatomic) AWEActivityConfigModel *configModel;
@property (nonatomic) unsigned long long baseViewType;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (id)initWithConfigModel:(id)arg0 delegate:(id)arg1;
- (void)setBaseViewType:(unsigned long long)arg0;
- (void)hidePendantViewWhenUpdateActivityController;
- (unsigned long long)baseViewType;
- (void)showPendantViewIfNeeded;

@end