//
//     Generated by private class-dump
//

@class NSString;
@protocol SECURLWildcard;

@interface SECURLBuiltinWildcard : NSObject <SECURLWildcard> {
    id<SECURLWildcard> _customImpl;
}

@property (retain, nonatomic) id<SECURLWildcard> customImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isWildcard:(id)arg0;
- (BOOL)isVariable:(id)arg0;
- (BOOL)isMatchAll:(id)arg0;
- (id)variableName:(id)arg0;
- (id)partsOfTarget:(id)arg0;
- (void).cxx_destruct;
- (id)customImpl;
- (void)setCustomImpl:(id)arg0;

@end
