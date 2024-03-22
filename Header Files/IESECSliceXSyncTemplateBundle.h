//
//     Generated by private class-dump
//

@class NSDictionary, NSString;
@protocol IESECSliceXTemplateMetaData;

@interface IESECSliceXSyncTemplateBundle : NSObject <IESECSliceXSyncTemplateBundle> {
    id<IESECSliceXTemplateMetaData> _metaData;
    NSDictionary *_jsonDict;
    NSString *_url;
}

@property (readonly, nonatomic) id<IESECSliceXTemplateMetaData> metaData;
@property (readonly, nonatomic) NSDictionary *jsonDict;
@property (readonly, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)arg0 version:(id)arg1 url:(id)arg2;
- (id)initWithName:(id)arg0 version:(id)arg1 jsonDict:(id)arg2;
- (id)metaData;
- (void).cxx_destruct;
- (id)jsonDict;
- (id)url;

@end
