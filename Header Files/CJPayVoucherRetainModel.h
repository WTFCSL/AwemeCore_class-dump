//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol CJPayRetainMsgV2;

@interface CJPayVoucherRetainModel : JSONModel {
    NSString *_titleLogoURL;
    NSString *_topRetainButtonText;
    NSString *_bottomRetainButtonText;
    NSString *_noCloseIcon;
    NSString *_retainType;
    NSArray<CJPayRetainMsgV2> *_retainMsgList;
    NSArray *_retainMsgListTrack;
}

@property (copy, nonatomic) NSString *titleLogoURL;
@property (copy, nonatomic) NSString *topRetainButtonText;
@property (copy, nonatomic) NSString *bottomRetainButtonText;
@property (copy, nonatomic) NSString *noCloseIcon;
@property (copy, nonatomic) NSString *retainType;
@property (copy, nonatomic) NSArray<CJPayRetainMsgV2> *retainMsgList;
@property (copy, nonatomic) NSArray *retainMsgListTrack;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)retainMsgList;
- (id)retainType;
- (void)setRetainType:(id)arg0;
- (id)bottomRetainButtonText;
- (id)topRetainButtonText;
- (id)retainMsgListTrack;
- (void)setTopRetainButtonText:(id)arg0;
- (void)setBottomRetainButtonText:(id)arg0;
- (id)noCloseIcon;
- (void)setNoCloseIcon:(id)arg0;
- (void)setRetainMsgList:(id)arg0;
- (id)titleLogoURL;
- (void)setTitleLogoURL:(id)arg0;
- (void)setRetainMsgListTrack:(id)arg0;
- (void).cxx_destruct;

@end
