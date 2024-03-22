//
//     Generated by private class-dump
//

@class NSString, UIResponder;

@interface IESECBTMContext : NSObject {
    BOOL _enterNewPage;
    NSString *_btmInfo;
    UIResponder *_host;
}

@property (retain, nonatomic) NSString *btmInfo;
@property (weak, nonatomic) UIResponder *host;
@property (nonatomic) BOOL enterNewPage;

+ (id)createInnerCtx:(id)arg0 host:(id)arg1;
+ (id)createJumpCtx:(id)arg0 host:(id)arg1;

- (BOOL)enterNewPage;
- (void)setBtmInfo:(id)arg0;
- (id)btmInfo;
- (void)setEnterNewPage:(BOOL)arg0;
- (id)initWithBtmInfo:(id)arg0 host:(id)arg1 enterNewPage:(BOOL)arg2;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)host;

@end
