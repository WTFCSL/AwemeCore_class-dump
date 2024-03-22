//
//     Generated by private class-dump
//

@class NSArray, IESECWinHeaderOtherInfoModel, NSString, IESECListKitListModel;

@interface IESECWinHeaderBFFModel : MTLModel <MTLJSONSerializing> {
    IESECWinHeaderOtherInfoModel *_otherInfo;
    NSArray *_sections;
    IESECListKitListModel *_feed;
}

@property (retain, nonatomic) IESECWinHeaderOtherInfoModel *otherInfo;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) IESECListKitListModel *feed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setOtherInfo:(id)arg0;
- (id)sections;
- (id)feed;
- (void).cxx_destruct;
- (void)setFeed:(id)arg0;
- (void)setSections:(id)arg0;
- (id)otherInfo;

@end