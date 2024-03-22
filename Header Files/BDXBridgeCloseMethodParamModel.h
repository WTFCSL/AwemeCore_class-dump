//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDXBridgeCloseMethodParamModel : BDXBridgeModel {
    BOOL _animated;
    NSString *_containerID;
    NSArray *_containerIDs;
}

@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL animated;
@property (retain, nonatomic) NSArray *containerIDs;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)animated;
- (void)setAnimated:(BOOL)arg0;
- (void)setContainerID:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerIDs:(id)arg0;
- (id)containerID;
- (id)containerIDs;

@end
