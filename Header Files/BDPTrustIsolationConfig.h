//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface BDPTrustIsolationConfig : BDPBasePluginModel {
    NSString *_pageCode;
    NSString *_code;
    NSString *_title;
    NSString *_subTitle;
    NSString *_content;
    NSArray *_enableValue;
    NSArray *_titleKeyWords;
    NSNumber *_included;
}

@property (copy, nonatomic) NSString *pageCode;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *enableValue;
@property (copy, nonatomic) NSArray *titleKeyWords;
@property (retain, nonatomic) NSNumber *included;

- (id)pageCode;
- (void)setPageCode:(id)arg0;
- (id)textConfig;
- (id)enableValue;
- (void)setEnableValue:(id)arg0;
- (id)titleKeyWords;
- (void)setTitleKeyWords:(id)arg0;
- (void)setCode:(id)arg0;
- (void)setIncluded:(id)arg0;
- (id)code;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (id)included;

@end
