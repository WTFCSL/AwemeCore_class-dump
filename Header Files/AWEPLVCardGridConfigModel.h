//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPLVCardGridConfigModel : MTLModel <MTLJSONSerializing> {
    NSArray *_titleSizeConfig;
    NSArray *_subTitleSizeConfig;
    long long _titleRow;
    NSArray *_cardColumnConfig;
    double _heightPercent;
}

@property (retain, nonatomic) NSArray *titleSizeConfig;
@property (retain, nonatomic) NSArray *subTitleSizeConfig;
@property (nonatomic) long long titleRow;
@property (retain, nonatomic) NSArray *cardColumnConfig;
@property (nonatomic) double heightPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cardColumnConfig;
- (long long)titleRow;
- (id)titleSizeConfig;
- (void)setTitleSizeConfig:(id)arg0;
- (id)subTitleSizeConfig;
- (void)setSubTitleSizeConfig:(id)arg0;
- (void)setTitleRow:(long long)arg0;
- (void)setCardColumnConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg0;

@end
