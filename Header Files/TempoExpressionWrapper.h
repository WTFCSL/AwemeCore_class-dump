//
//     Generated by private class-dump
//

@class _TtC8TempoiOS10TempoLoger, NSString, _TtC8TempoiOS13TempoTemplate, TempoExpression;

@interface TempoExpressionWrapper : NSObject {
    BOOL _isPreload;
    TempoExpression *_expression;
    NSString *_source;
    _TtC8TempoiOS10TempoLoger *_logger;
    _TtC8TempoiOS13TempoTemplate *_tp;
}

@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) _TtC8TempoiOS10TempoLoger *logger;
@property (retain, nonatomic) _TtC8TempoiOS13TempoTemplate *tp;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) TempoExpression *expression;

+ (id)wrapperWithSource:(id)arg0 logger:(id)arg1 template:(id)arg2 isPreload:(BOOL)arg3;
+ (id)wrapperWithExpression:(id)arg0 logger:(id)arg1 template:(id)arg2 isPreload:(BOOL)arg3;

- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg0;
- (id)executeExpression:(id)arg0 temporaryContext:(id)arg1;
- (id)createExpression;
- (id)executeExpression:(id)arg0;
- (void)setTp:(id)arg0;
- (id)tp;
- (id)logger;
- (void)handleError:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setExpression:(id)arg0;
- (id)expression;
- (void)setSource:(id)arg0;
- (void)setLogger:(id)arg0;

@end
