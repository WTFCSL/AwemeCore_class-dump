//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveListBottomJumpInfo : MTLModel <MTLJSONSerializing> {
    BOOL _showSmallWindow;
    long long _jumpType;
    NSString *_jumpURL;
    NSString *_schemaParamsType;
}

@property (nonatomic) long long jumpType;
@property (nonatomic) BOOL showSmallWindow;
@property (retain, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) NSString *schemaParamsType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)jumpType;
- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (void)setJumpType:(long long)arg0;
- (id)schemaParamsType;
- (void)setSchemaParamsType:(id)arg0;
- (BOOL)showSmallWindow;
- (void)setShowSmallWindow:(BOOL)arg0;
- (void).cxx_destruct;

@end
