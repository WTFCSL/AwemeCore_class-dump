//
//     Generated by private class-dump
//

@class NSString, NSSet, NSDictionary, NSMutableArray;

@interface AWEHPComponentBaseCallContext : NSObject {
    NSString *_componentID;
    NSString *_componentType;
    NSMutableArray *_tabIDStack;
    NSSet *_cTags;
    NSDictionary *_bizTrackParams;
}

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSMutableArray *tabIDStack;
@property (copy, nonatomic) NSSet *cTags;
@property (copy, nonatomic) NSDictionary *bizTrackParams;

- (id)bizTrackParams;
- (void)setCTags:(id)arg0;
- (void)setTabIDStack:(id)arg0;
- (id)tabIDStack;
- (void)setBizTrackParams:(id)arg0;
- (id)cTags;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)componentType;
- (id)description;
- (void)setComponentType:(id)arg0;
- (id)componentID;
- (void)setComponentID:(id)arg0;

@end
