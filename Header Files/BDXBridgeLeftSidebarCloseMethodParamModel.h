//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeLeftSidebarCloseMethodParamModel : BDXBridgeModel {
    BOOL _closeAfterOpenPage;
    NSString *_enterFrom;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL closeAfterOpenPage;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)closeAfterOpenPage;
- (void)setCloseAfterOpenPage:(BOOL)arg0;
- (void).cxx_destruct;

@end
