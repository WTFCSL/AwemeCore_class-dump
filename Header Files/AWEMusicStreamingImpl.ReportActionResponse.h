//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.ReportActionResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* unknown type, empty encoding */ result;
    void /* unknown type, empty encoding */ message;
}

@property (nonatomic, copy) NSString *result;
@property (nonatomic, copy) NSString *message;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setMessage:(id)arg0;
- (id)init;
- (void)setResult:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)result;
- (id)message;
- (id)initWithCoder:(id)arg0;

@end
