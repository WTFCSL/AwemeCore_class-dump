//
//     Generated by private class-dump
//

@class NSString, NSArray, NSAttributedString;

@interface AWEECOMIMSopRecommendMsgModel : AWEECOMIMBaseMsgModel {
    NSString *_tipContent;
    NSArray *_sopAction;
    NSAttributedString *_attributedContent;
}

@property (copy, nonatomic) NSString *tipContent;
@property (copy, nonatomic) NSArray *sopAction;
@property (copy, nonatomic) NSAttributedString *attributedContent;

+ (Class)cellClass;

- (id)sopAction;
- (id)attributedContent;
- (void)setAttributedContent:(id)arg0;
- (void)setSopAction:(id)arg0;
- (id)tipContent;
- (void).cxx_destruct;
- (void)setTipContent:(id)arg0;
- (id)initWithMessage:(id)arg0;

@end
