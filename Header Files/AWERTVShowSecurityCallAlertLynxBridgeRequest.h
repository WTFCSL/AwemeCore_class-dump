//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWERTVShowSecurityCallAlertLynxBridgeRequest : BDXBridgeModel {
    NSString *_headerImageURLString;
    NSString *_content;
    NSString *_title;
    NSString *_confirmTitle;
    NSArray *_highlights;
}

@property (copy, nonatomic) NSString *headerImageURLString;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *confirmTitle;
@property (copy, nonatomic) NSArray *highlights;

+ (id)JSONKeyPathsByPropertyKey;

- (id)confirmTitle;
- (void)setConfirmTitle:(id)arg0;
- (void)setHeaderImageURLString:(id)arg0;
- (id)headerImageURLString;
- (void).cxx_destruct;
- (id)content;
- (id)highlights;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setHighlights:(id)arg0;

@end