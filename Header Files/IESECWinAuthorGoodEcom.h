//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECWinAuthorGoodEcom : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_iconUrl;
    NSString *_clickSchema;
}

@property (retain, nonatomic) IESECURLModel *iconUrl;
@property (copy, nonatomic) NSString *clickSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)clickSchema;
- (void)setClickSchema:(id)arg0;
- (void).cxx_destruct;

@end
