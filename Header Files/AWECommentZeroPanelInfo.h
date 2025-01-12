//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentZeroPanelInfo : MTLModel <MTLJSONSerializing> {
    NSString *_biz;
    unsigned long long _style;
    NSString *_text;
    NSString *_url;
    NSString *_urlText;
    NSString *_buttonText;
}

@property (copy, nonatomic) NSString *biz;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlText;
@property (copy, nonatomic) NSString *buttonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)biz;
- (void)setBiz:(id)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)text;
- (id)buttonText;
- (void)setStyle:(unsigned long long)arg0;
- (id)url;
- (void)setUrlText:(id)arg0;
- (id)urlText;
- (void)setButtonText:(id)arg0;

@end
