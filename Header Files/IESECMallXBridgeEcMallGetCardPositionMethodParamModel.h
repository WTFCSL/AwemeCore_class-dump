//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECMallXBridgeEcMallGetCardPositionMethodParamModel : BDXBridgeModel {
    NSString *_sectionID;
    NSString *_itemID;
    NSString *_elementName;
    NSString *_target;
    NSNumber *_coordinate;
    NSNumber *_index;
}

@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSString *target;
@property (retain, nonatomic) NSNumber *coordinate;
@property (retain, nonatomic) NSNumber *index;

+ (id)JSONKeyPathsByPropertyKey;

- (id)sectionID;
- (void)setIndex:(id)arg0;
- (void)setSectionID:(id)arg0;
- (void).cxx_destruct;
- (void)setCoordinate:(id)arg0;
- (void)setTarget:(id)arg0;
- (id)itemID;
- (id)target;
- (void)setItemID:(id)arg0;
- (id)index;
- (id)elementName;
- (id)coordinate;
- (void)setElementName:(id)arg0;

@end
