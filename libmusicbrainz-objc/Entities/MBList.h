//
// @file MBList.h
// @author Joachim LeBlanc
// @date June 19 2012
// @copyright
//   2012 Joachim LeBlanc <demosdemon@gmail.com> \n
//   This program is made available under the terms of the MIT License.
//
// @brief Base class for all lists

#import "MBEntity.h"

/// Represents all `<*-list/>` elements
@interface MBList : MBEntity <NSFastEnumeration> {
  NSMutableArray * _elements;
  NSString *_elementName;  
}

@property (nonatomic, readonly) NSNumber * Count;
@property (nonatomic, readonly) NSNumber * Offset;
@property (nonatomic, readonly) NSString * TargetType;

- (NSUInteger) elementCount;
- (id) elementAtIndex:(NSUInteger)index;

@end
