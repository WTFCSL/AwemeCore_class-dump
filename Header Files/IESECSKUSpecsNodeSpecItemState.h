//
//     Generated by private class-dump
//

@class NSString;

@interface IESECSKUSpecsNodeSpecItemState : MTLModel <MTLJSONSerializing> {
    BOOL _canSelect;
    NSString *_status;
}

@property (nonatomic) BOOL canSelect;
@property (retain, nonatomic) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)status;
- (void)setStatus:(id)arg0;
- (BOOL)canSelect;
- (void)setCanSelect:(BOOL)arg0;

@end