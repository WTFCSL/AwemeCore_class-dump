//
//     Generated by private class-dump
//

@protocol AWEHPChannelBadgeModelProtocol;

@interface AWEHPChannelBadgeCallContext : AWEHPComponentBaseCallContext {
    id<AWEHPChannelBadgeModelProtocol> _badgeModel;
    id<AWEHPChannelBadgeModelProtocol> _originBadgeModel;
}

@property (copy, nonatomic) id<AWEHPChannelBadgeModelProtocol> badgeModel;
@property (copy, nonatomic) id<AWEHPChannelBadgeModelProtocol> originBadgeModel;

- (void)setBadgeModel:(id)arg0;
- (void)setOriginBadgeModel:(id)arg0;
- (id)badgeModel;
- (id)originBadgeModel;
- (void).cxx_destruct;

@end