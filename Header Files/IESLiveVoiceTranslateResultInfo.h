//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveVoiceTranslateResultInfo : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long indexOfOneConnection;
@property (nonatomic) BOOL isInterIM;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end