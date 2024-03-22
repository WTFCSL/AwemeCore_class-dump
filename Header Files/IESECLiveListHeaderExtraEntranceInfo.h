//
//     Generated by private class-dump
//

@class NSString, IESECLiveConfigContentItemModel;

@interface IESECLiveListHeaderExtraEntranceInfo : MTLModel <MTLJSONSerializing> {
    long long _extraEntranceType;
    IESECLiveConfigContentItemModel *_extraEntranceElement;
}

@property (nonatomic) long long extraEntranceType;
@property (retain, nonatomic) IESECLiveConfigContentItemModel *extraEntranceElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)extraEntranceElement;
- (long long)extraEntranceType;
- (void)setExtraEntranceType:(long long)arg0;
- (void)setExtraEntranceElement:(id)arg0;
- (void).cxx_destruct;

@end