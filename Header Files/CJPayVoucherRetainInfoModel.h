//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol CJPayVoucherRetainMsgModel;

@interface CJPayVoucherRetainInfoModel : JSONModel {
    BOOL _noCloseIcon;
    NSString *_topRetainButtonText;
    NSString *_bottomRetainButtonText;
    long long _countdown;
    NSArray<CJPayVoucherRetainMsgModel> *_retainMsgList;
}

@property (nonatomic) BOOL noCloseIcon;
@property (copy, nonatomic) NSString *topRetainButtonText;
@property (copy, nonatomic) NSString *bottomRetainButtonText;
@property (nonatomic) long long countdown;
@property (copy, nonatomic) NSArray<CJPayVoucherRetainMsgModel> *retainMsgList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)retainMsgList;
- (id)bottomRetainButtonText;
- (id)topRetainButtonText;
- (void)setTopRetainButtonText:(id)arg0;
- (void)setBottomRetainButtonText:(id)arg0;
- (BOOL)noCloseIcon;
- (void)setNoCloseIcon:(BOOL)arg0;
- (void)setRetainMsgList:(id)arg0;
- (void).cxx_destruct;
- (long long)countdown;
- (void)setCountdown:(long long)arg0;

@end
