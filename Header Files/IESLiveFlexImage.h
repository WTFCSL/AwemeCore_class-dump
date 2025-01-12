//
//     Generated by private class-dump
//

@class NSArray, NSString, UIImage;

@interface IESLiveFlexImage : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSArray *flexSetting;
@property (retain, nonatomic) NSArray *textSetting;
@property (retain, nonatomic) UIImage *localImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveFlexImageFromFlexImageStruct:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mapPBFlexImageStruct;

@end
