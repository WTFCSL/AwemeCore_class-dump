//
//     Generated by private class-dump
//

@class NSString;
@protocol IESECSliceXTemplateMetaData;

@interface IESECSliceXAsyncTemplateBundle : NSObject <IESECSliceXAsyncTemplateBundle> {
    id<IESECSliceXTemplateMetaData> _metaData;
    NSString *_url;
}

@property (readonly, nonatomic) id<IESECSliceXTemplateMetaData> metaData;
@property (readonly, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)arg0 version:(id)arg1 url:(id)arg2;
- (id)metaData;
- (void).cxx_destruct;
- (id)url;

@end