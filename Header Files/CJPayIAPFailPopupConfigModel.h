//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface CJPayIAPFailPopupConfigModel : NSObject {
    int _merchantFrequency;
    int _orderFrequency;
    NSArray *_sk1Network;
    NSArray *_sk2Network;
    NSArray *_sk1Others;
    NSArray *_sk2Others;
    NSString *_linkChatUrl;
    NSString *_contentNetwork;
    NSString *_contentOthers;
    NSString *_titleNetwork;
    NSString *_titleOthers;
    double _startTime;
}

@property (copy, nonatomic) NSArray *sk1Network;
@property (copy, nonatomic) NSArray *sk2Network;
@property (copy, nonatomic) NSArray *sk1Others;
@property (copy, nonatomic) NSArray *sk2Others;
@property (copy, nonatomic) NSString *linkChatUrl;
@property (copy, nonatomic) NSString *contentNetwork;
@property (copy, nonatomic) NSString *contentOthers;
@property (copy, nonatomic) NSString *titleNetwork;
@property (copy, nonatomic) NSString *titleOthers;
@property (nonatomic) double startTime;
@property (nonatomic) int merchantFrequency;
@property (nonatomic) int orderFrequency;

- (id)linkChatUrl;
- (void)setLinkChatUrl:(id)arg0;
- (void)setSk1Network:(id)arg0;
- (void)setSk2Network:(id)arg0;
- (void)setSk1Others:(id)arg0;
- (void)setSk2Others:(id)arg0;
- (void)setContentNetwork:(id)arg0;
- (void)setContentOthers:(id)arg0;
- (void)setTitleNetwork:(id)arg0;
- (void)setTitleOthers:(id)arg0;
- (void)setMerchantFrequency:(int)arg0;
- (void)setOrderFrequency:(int)arg0;
- (id)sk1Network;
- (id)sk2Network;
- (id)sk1Others;
- (id)sk2Others;
- (id)contentNetwork;
- (id)contentOthers;
- (id)titleNetwork;
- (id)titleOthers;
- (int)merchantFrequency;
- (int)orderFrequency;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)startTime;

@end
