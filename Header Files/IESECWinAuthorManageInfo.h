//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECWinAuthorManageInfo : MTLModel <MTLJSONSerializing> {
    NSArray *_infos;
}

@property (retain, nonatomic) NSArray *infos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)infos;
- (void)setInfos:(id)arg0;

@end
