//
//     Generated by private class-dump
//

@interface AWELivePaidRoomModel : AWEBaseApiModel {
    long long _paidLiveType;
    long long _viewRight;
    long long _delivery;
}

@property (nonatomic) long long paidLiveType;
@property (nonatomic) long long viewRight;
@property (nonatomic) long long delivery;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)paidLiveType;
- (void)setPaidLiveType:(long long)arg0;
- (long long)viewRight;
- (void)setViewRight:(long long)arg0;
- (long long)delivery;
- (void)setDelivery:(long long)arg0;

@end