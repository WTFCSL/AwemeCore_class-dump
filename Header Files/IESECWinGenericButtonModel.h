//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECWinGenericButtonModel : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_icon;
    NSString *_jumpURL;
}

@property (retain, nonatomic) IESECURLModel *icon;
@property (retain, nonatomic) NSString *jumpURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (id)icon;
- (void).cxx_destruct;
- (void)setIcon:(id)arg0;

@end
