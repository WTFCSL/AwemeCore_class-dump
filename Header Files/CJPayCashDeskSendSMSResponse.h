//
//     Generated by private class-dump
//

@class NSString, CJPayErrorButtonInfo;

@interface CJPayCashDeskSendSMSResponse : CJPayBaseResponse {
    NSString *_desc;
    NSString *_mobileMask;
    CJPayErrorButtonInfo *_buttonInfo;
}

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *mobileMask;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;

- (id)buttonInfo;
- (void)setButtonInfo:(id)arg0;
- (id)mobileMask;
- (void)setMobileMask:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setDesc:(id)arg0;

@end
