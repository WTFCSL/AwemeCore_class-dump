//
//     Generated by private class-dump
//

@class LynxTemplateData, NSString, LynxTemplateBundle, NSData;

@interface LynxLoadMeta : NSObject {
    NSString *_url;
    long long _loadMode;
    long long _loadOption;
    NSData *_binaryData;
    LynxTemplateData *_initialData;
    LynxTemplateBundle *_templateBundle;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long loadMode;
@property (nonatomic) long long loadOption;
@property (retain, nonatomic) NSData *binaryData;
@property (retain, nonatomic) LynxTemplateData *initialData;
@property (retain, nonatomic) LynxTemplateBundle *templateBundle;

- (id)templateBundle;
- (id)initialData;
- (void)setInitialData:(id)arg0;
- (void)setBinaryData:(id)arg0;
- (void)setTemplateBundle:(id)arg0;
- (long long)loadOption;
- (void)setLoadOption:(long long)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;
- (id)binaryData;
- (long long)loadMode;
- (void)setLoadMode:(long long)arg0;

@end