//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedAwemeFeaturePTYProducer : NSObject <PTYIFeatureProducer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getAwemeIDFromParams:(id)arg0;
- (id)getAwemeOneFeature:(id)arg0 extParams:(id)arg1;
- (id)valueToString:(id)arg0;
- (id)valueToNumber:(id)arg0;
- (id)valueToDictionary:(id)arg0;
- (id)valueToArray:(id)arg0;
- (id)getStrFeature:(id)arg0 extParams:(id)arg1;
- (float)getNumicFeature:(id)arg0 extParams:(id)arg1;
- (id)getSeqFeature:(id)arg0 extParams:(id)arg1;
- (id)getDictFeature:(id)arg0 extParams:(id)arg1;
- (id)groupName;

@end
