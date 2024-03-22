//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEStudioLocalLifeNoticeToastModel : MTLModel <MTLJSONSerializing> {
    NSString *_toastContent;
    long long _toastType;
}

@property (copy, nonatomic) NSString *toastContent;
@property (nonatomic) long long toastType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)toastContent;
- (void)setToastContent:(id)arg0;
- (long long)toastType;
- (void)setToastType:(long long)arg0;
- (void).cxx_destruct;

@end